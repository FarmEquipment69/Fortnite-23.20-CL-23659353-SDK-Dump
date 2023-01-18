// ScriptStruct /Script/ModelProto.ModelProto
// Size: 0x120
struct FModelProto
{
	bool bIsLoaded; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	int64_t IRVersion; // 0x8 (0x8)
	struct TArray<struct FOperatorSetIdProto> OpsetImport; // 0x10 (0x10)
	struct FString ProducerName; // 0x20 (0x10)
	struct FString ProducerVersion; // 0x30 (0x10)
	struct FString Domain; // 0x40 (0x10)
	int64_t ModelVersion; // 0x50 (0x8)
	struct FString DocString; // 0x58 (0x10)
	struct FGraphProto Graph; // 0x68 (0x98)
	struct TArray<struct FStringStringEntryProto> MetadataProps; // 0x100 (0x10)
	struct TArray<struct FTrainingInfoProto> TrainingInfo; // 0x110 (0x10)
};

