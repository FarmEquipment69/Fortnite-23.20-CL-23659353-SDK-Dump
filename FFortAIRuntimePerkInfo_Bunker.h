// ScriptStruct /Script/FortniteAI.FortAIRuntimePerkInfo_Bunker
// Size: 0x68
struct FFortAIRuntimePerkInfo_Bunker : FFortAIRuntimePerkInfo
{
	float OddsToBeUsedAgainstUnknownThreat; // 0x40 (0x4)
	float OddsToUseRoofBuilding; // 0x44 (0x4)
	float OddsToBuildForwardRamp; // 0x48 (0x4)
	float InitialBuildDelay; // 0x4c (0x4)
	float SamePieceBuildDelay; // 0x50 (0x4)
	float SamePieceBuildDelayRandomDeviation; // 0x54 (0x4)
	float DifferentPieceBuildDelay; // 0x58 (0x4)
	float DifferentPieceBuildDelayRandomDeviation; // 0x5c (0x4)
	float OddsToSelectRandomMaterial; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

