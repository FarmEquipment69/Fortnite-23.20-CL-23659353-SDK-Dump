// ScriptStruct /Script/FortniteGame.FortActorRecord
// Size: 0xa0
struct FFortActorRecord
{
	struct FGuid ActorGUID; // 0x0 (0x10)
	struct TEnumAsByte<EFortBuildingPersistentState> ActorState; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	class UClass* ActorClass; // 0x18 (0x8)
	struct FTransform ActorTransform; // 0x20 (0x60)
	bool bSpawnedActor; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct TArray<unsigned char> ActorData; // 0x88 (0x10)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

