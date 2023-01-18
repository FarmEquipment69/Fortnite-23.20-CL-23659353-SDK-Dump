// ScriptStruct /Script/FortniteGame.LevelStreamedDeleteActorRecord
// Size: 0xc0
struct FLevelStreamedDeleteActorRecord
{
	struct FName ActorId; // 0x0 (0x4)
	unsigned char unreflected_4[0xc]; // 0x4 (0xc) 
	struct FTransform Transform; // 0x10 (0x60)
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x70 (0x28)
	struct TWeakObjectPtr<class UWorld> OwningLevel; // 0x98 (0x28)
};

