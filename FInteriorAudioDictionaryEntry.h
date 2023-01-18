// ScriptStruct /Script/FortniteGame.InteriorAudioDictionaryEntry
// Size: 0x58
struct FInteriorAudioDictionaryEntry
{
	struct FString EditCode; // 0x0 (0x10)
	int Tags; // 0x10 (0x4)
	enum EInteriorAudioBuildingEvaluation DefaultEvaluation; // 0x14 (0x1)
	enum EInteriorAudioBuildingEvaluation ConditionalEvaluation; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct FInteriorAudioBuildingRotationConstraint RotationConstraint; // 0x18 (0x28)
	int BuildingWeights[0x5]; // 0x40 (0x4) (ARRAY) 
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

