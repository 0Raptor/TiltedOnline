#pragma once

enum ClientOpcode : unsigned char
{
    kAuthenticationRequest = 0,
    kCancelAssignmentRequest,
    kRemoveCharacterRequest,
    kAssignCharacterRequest,
    kClientReferencesMoveRequest,
    kEnterCellRequest,
    kClientRpcCalls,
    kRequestInventoryChanges,
    kRequestFactionsChanges,
    kRequestQuestUpdate,
    kPartyInviteRequest,
    kPartyAcceptInviteRequest,
    kPartyLeaveRequest,
    kCharacterTravelRequest,
    kRequestActorValueChanges,
    kRequestActorMaxValueChanges,
    kRequestHealthChangeBroadcast,
    kRequestSpawnData,
    kActivateRequest,
    kLockChangeRequest,
    kAssignObjectsRequest,
    kClientOpcodeMax
};

enum ServerOpcode : unsigned char
{
    kAuthenticationResponse = 0,
    kAssignCharacterResponse,
    kServerReferencesMoveRequest,
    kServerScriptUpdate,
    kServerTimeSettings,
    kCharacterSpawnRequest,
    kNotifyInventoryChanges,
    kNotifyFactionsChanges,
    kNotifyRemoveCharacter,
    kNotifyQuestUpdate,
    kNotifyPlayerList,
    kNotifyPartyInfo,
    kNotifyPartyInvite,
    kNotifyCharacterTravel,
    kNotifyActorValueChanges,
    kNotifyActorMaxValueChanges,
    kNotifyHealthChangeBroadcast,
    kNotifySpawnData,
    kNotifyActivate,
    kNotifyLockChange,
    kAssignObjectsResponse,
    kServerOpcodeMax
};