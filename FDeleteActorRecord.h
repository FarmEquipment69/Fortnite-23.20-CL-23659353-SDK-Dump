// ScriptStruct /Script/FortniteGame.DeleteActorRecord
// Size: 0x38
struct FDeleteActorRecord
{
	uint64_t RecordID; // 0x0 (0x8)
	struct FName ActorId; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x10 (0x28)
};

