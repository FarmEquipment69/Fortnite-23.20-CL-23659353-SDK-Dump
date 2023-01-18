// ScriptStruct /Script/FortniteGame.MinimalHighlightShot
// Size: 0xb0
struct FMinimalHighlightShot
{
	int VersionNumber; // 0x0 (0x4)
	float StartTimestamp; // 0x4 (0x4)
	float ShotDuration; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FUniqueNetIdRepl PlayerId; // 0x10 (0x30)
	struct FString PlayerName; // 0x40 (0x10)
	struct TMap<enum EHighlightFeatures, float> FeatureScores; // 0x50 (0x50)
	int NumEliminations; // 0xa0 (0x4)
	enum EHighlightSignificances ClipSignificance; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	float FinalScore; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

