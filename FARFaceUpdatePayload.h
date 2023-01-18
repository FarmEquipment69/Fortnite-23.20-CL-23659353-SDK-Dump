// ScriptStruct /Script/AugmentedReality.ARFaceUpdatePayload
// Size: 0x60
struct FARFaceUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	struct FVector LeftEyePosition; // 0x18 (0x18)
	struct FVector RightEyePosition; // 0x30 (0x18)
	struct FVector LookAtTarget; // 0x48 (0x18)
};

