// ScriptStruct /Script/Engine.AnimNode_StateMachine
// Size: 0xc8
struct FAnimNode_StateMachine : FAnimNode_Base
{
	int StateMachineIndexInClass; // 0x10 (0x4)
	int MaxTransitionsPerFrame; // 0x14 (0x4)
	int MaxTransitionsRequests; // 0x18 (0x4)
	bool bSkipFirstUpdateTransition; // 0x1c (0x1)
	bool bReinitializeOnBecomingRelevant; // 0x1d (0x1)
	bool bCreateNotifyMetaData; // 0x1e (0x1)
	bool bAllowConduitEntryStates; // 0x1f (0x1)
	unsigned char padding_20[0xa8]; // 0x20 (0xa8)
};

