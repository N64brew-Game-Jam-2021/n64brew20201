#ifndef _CONTROLS_SCRAMBLER_H
#define _CONTROLS_SCRAMBLER_H

#include "playerinput.h"

enum ControlsScramblerType {
    ControlsScramblerTypeJoystickFipped,
    ControlsScramblerTypeButtonsFlipped,
    ControlsScramblerTypeAttackTurbo,
    ControlsScramblerTypeJumpTurbo,
    ControlsScramblerTypeMoveTurbo,
    ControlsScramblerDPADSwap,
    ControlsScramblerViewFlipped,
    ControlsScramblerTypeCount,
};

struct ControlsScrambler {
    struct PlayerInput playerInput;
    float timers[ControlsScramblerTypeCount];
};

void controlsScramblerInit(struct ControlsScrambler* scrambler);
void controlsScramblerUpdate(struct ControlsScrambler* scrambler);
void controlsScramblerTrigger(struct ControlsScrambler* scrambler, enum ControlsScramblerType type);
void controlsScramblerApply(struct ControlsScrambler* scrambler);
int controlsScramblerIsActive(struct ControlsScrambler* scrambler, enum ControlsScramblerType type);

float controlsScramblerGetCameraRotation(struct ControlsScrambler* scrambler);

#endif