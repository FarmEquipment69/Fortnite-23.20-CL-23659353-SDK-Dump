// ScriptStruct /Script/ModelProto.TrainingInfoProto
// Size: 0x158
struct FTrainingInfoProto
{
	bool bIsLoaded; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGraphProto Initialization; // 0x8 (0x98)
	struct FGraphProto Algorithm; // 0xa0 (0x98)
	struct TArray<struct FStringStringEntryProto> InitializationBinding; // 0x138 (0x10)
	struct TArray<struct FStringStringEntryProto> UpdateBinding; // 0x148 (0x10)
};

