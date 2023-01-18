// ScriptStruct /Script/AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20
struct FActorPerceptionBlueprintInfo
{
	class AActor* Target; // 0x0 (0x8)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8 (0x10)
	unsigned char bIsHostile; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

