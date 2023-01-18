// ScriptStruct /Script/FortniteGame.ActorInstanceRecord
// Size: 0xa0
struct FActorInstanceRecord
{
	uint64_t RecordID; // 0x0 (0x8)
	uint64_t TemplateRecordID; // 0x8 (0x8)
	struct FName ActorId; // 0x10 (0x4)
	struct FGuid ActorGUID; // 0x14 (0x10)
	unsigned char unreflected_24[0xc]; // 0x24 (0xc) 
	struct FTransform Transform; // 0x30 (0x60)
	struct TWeakObjectPtr<class AActor> ActorPtr; // 0x90 (0x8)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

