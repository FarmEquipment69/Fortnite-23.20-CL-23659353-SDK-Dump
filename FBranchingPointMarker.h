// ScriptStruct /Script/Engine.BranchingPointMarker
// Size: 0xc
struct FBranchingPointMarker
{
	int NotifyIndex; // 0x0 (0x4)
	float TriggerTime; // 0x4 (0x4)
	struct TEnumAsByte<EAnimNotifyEventType> NotifyEventType; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

