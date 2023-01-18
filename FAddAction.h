// ScriptStruct /Script/DeltaFileSystem.AddAction
// Size: 0xc0
struct FAddAction : FDeltaAction
{
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x20 (0x28)
	struct FString JsonStringObjectForPropertyData; // 0x48 (0x10)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FTransform Transform; // 0x60 (0x60)
};

