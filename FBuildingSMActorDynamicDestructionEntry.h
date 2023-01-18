// ScriptStruct /Script/FortniteGame.BuildingSMActorDynamicDestructionEntry
// Size: 0x38
struct FBuildingSMActorDynamicDestructionEntry
{
	struct TArray<struct FBuildingSMActorDynamicDestructionStaticMeshEntry> ActiveStaticMeshEntries; // 0x0 (0x10)
	struct TArray<class UStaticMeshComponent*> VisibiltyOnlyStatMeshComps; // 0x10 (0x10)
	unsigned char padding_20[0x18]; // 0x20 (0x18)
};

