// ScriptStruct /Script/FortniteGame.DynamicXpCalibrationResult
// Size: 0x28
struct FDynamicXpCalibrationResult
{
	enum EDynamicXpCalibrationPhase Result; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString Ids; // 0x8 (0x10)
	struct FDateTime* ResultExpiresAt; // 0x18 (0x8)
	float XpVarianceMult; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

