// ScriptStruct /Script/FortniteGame.ActorTemplateRecord
// Size: 0xd0
struct FActorTemplateRecord
{
	uint64_t ID; // 0x0 (0x8)
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x8 (0x28)
	struct TArray<struct FActorComponentRecord> ActorComponents; // 0x30 (0x10)
	struct TArray<unsigned char> ActorData; // 0x40 (0x10)
	struct TArray<struct FSoftObjectPath> ActorDataReferenceTable; // 0x50 (0x10)
	struct TArray<bool> ActorDataHardReferences; // 0x60 (0x10)
	struct TMap<struct FString, struct FGuid> PropertyToActorGuid; // 0x70 (0x50)
	uint32_t DataHash; // 0xc0 (0x4)
	uint16_t DataHeaderSize; // 0xc4 (0x2)
	int16_t LevelRecordSaveVersion; // 0xc6 (0x2)
	bool bUsingRecordDataReferenceTable; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

