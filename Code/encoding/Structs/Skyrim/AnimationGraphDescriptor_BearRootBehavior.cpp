#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_BearRootBehavior.h>

enum Variables
{
    kiSyncIdleLocomotion = 0,
    kblendDefault = 1,
    kfMinSpeed = 2,
    kSpeed = 3,
    kiSyncTurnState = 4,
    kiSyncForwardState = 5,
    kTurnDelta = 6,
    kfMinTurnDelta = 7,
    kturnSpeedMult = 8,
    kiCombatStance = 9,
    ktest = 10,
    kbHeadTrackingOn = 11,
    kTargetLocation = 12,
    kFootIKEnable = 13,
    km_onOffGain = 14,
    km_groundAscendingGain = 15,
    km_groundDescendingGain = 16,
    km_footPlantedGain = 17,
    km_footRaisedGain = 18,
    km_footUnlockGain = 19,
    km_worldFromModelFeedbackGain = 20,
    km_errorUpDownBias = 21,
    km_alignWorldFromModelGain = 22,
    km_hipOrientationGain = 23,
    km_footPlantedAnkleHeightMS = 24,
    km_footRaisedAnkleHeightMS = 25,
    km_maxAnkleHeightMS = 26,
    km_minAnkleHeightMS = 27,
    kblendFast = 28,
    kbAnimationDriven = 29,
    kbAllowRotation = 30,
    kbHeadTracking = 31,
    kbDisableHeadTrack = 32,
    kIsRecoiling = 33,
    kIsStaggering = 34,
    kIsAttacking = 35,
    kbIsWolf = 36,
    kstaggerMagnitude = 37,
    kIsBleedingOut = 38,
    kbIsSynced = 39,
    kbEquipOk = 40,
    kbCanHeadTrack = 41,
    kblendSlow = 42,
    kisIdleSitting = 43,
    kbMirroredAttack = 44,
    kiState = 45,
    kbSkeeverLunge = 46,
    kiCharacterSelector = 47,
    kfMinMoveSpeed = 48,
    kDirection = 49,
    kiIsCanine = 50,
    kiTurnMirrored = 51,
    kIsAttackReady = 52,
    kTurnDeltaDamped = 53,
    kIsBashing = 54,
    kbNoHeadTrack = 55,
    kcamerafromx = 56,
    kcamerafromy = 57,
    kcamerafromz = 58,
    kwalkBackRate = 59,
    kiState_BearDefault = 60,
    km_footPlantedAnkleHeightMS_Front = 61,
    km_footRaisedAnkleHeightMS_Front = 62,
    km_maxAnkleHeightMS_Front = 63,
    km_footPlantedAnkleHeightMS_Rear = 64,
    km_footRaisedAnkleHeightMS_Rear = 65,
    km_maxAnkleHeightMS_Rear = 66,
    km_minCharControllerSeparation = 67,
    km_maxCharControllerSeparation = 68,
    km_errorOut = 69,
    km_hitSomething_0 = 70,
    km_hitSomething_1 = 71,
    km_hitSomething_2 = 72,
    km_hitSomething_3 = 73,
    kbLegCastResults = 74,
    kIsSideAttacking = 75,
    kiState_BearSwimDefault = 76,
    kiGetUpType = 77,
    kiGetUpType00 = 78,
    kiMovementSpeed = 79,
    kisMoving = 80,
    kbForceIdleStop = 81,
    kbFootIKEnable = 82,
    kisIdleLay = 83,
    kiState_CowDefault = 84,
    kiState_DogDefault = 85,
    kiState_WolfDefault = 86,
    kiState_SabreCatDefault = 87,
    kiState_SkeeverDefault = 88,
    kiState_SkeeverLunge = 89,
    kiState_HorseDefault = 90,
    kiState_DeerDefault = 91,
    kiState_GoatDefault = 92,
    kiState_HorkerDefault = 93,
    kiState_MammothDefault = 94,
    kiState_HorseSprint = 95,
    kiSyncSprintState = 96,
    kfTwistDirection = 97,
    kOldDirection = 98,
    kSpeedSampled = 99,
    kwalkBackSpeedMult = 100,
    kstaggerDirection = 101,
    kiState_CowSwimDefault = 102,
    kiState_HorkerSwimDefault = 103,
    kisSwimming = 104,
    kiState_DeerDefaultRun = 105,
};

AnimationGraphDescriptor_BearRootBehavior::AnimationGraphDescriptor_BearRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    AnimationGraphDescriptorManager::Builder s_builder(aManager, "BearRootBehavior",
        AnimationGraphDescriptor(
        {kbHeadTrackingOn,
            kbAnimationDriven,
            kbAllowRotation,
            kbHeadTracking,
            kbDisableHeadTrack,
            kIsRecoiling,
            kIsStaggering,
            kIsAttacking,
            kbSkeeverLunge,
            kbFootIKEnable,
            kisMoving,
            },
        {kSpeed,
            kTurnDelta,
            kturnSpeedMult,
            kDirection,
            kTurnDeltaDamped,
            kSpeedSampled,
            kwalkBackSpeedMult,
            },
        {kiSyncSprintState,
            kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiSyncForwardState,
            kiMovementSpeed,
            kiCombatStance,
            }));
}
