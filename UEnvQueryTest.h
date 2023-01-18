// Class /Script/AIModule.EnvQueryTest
// Size: 0x1f8
class UEnvQueryTest : public UEnvQueryNode
{
	int TestOrder; // 0x30 (0x4)
	struct TEnumAsByte<EEnvTestPurpose> TestPurpose; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FString TestComment; // 0x38 (0x10)
	struct TEnumAsByte<EEnvTestFilterOperator> MultipleContextFilterOp; // 0x48 (0x1)
	struct TEnumAsByte<EEnvTestScoreOperator> MultipleContextScoreOp; // 0x49 (0x1)
	struct TEnumAsByte<EEnvTestFilterType> FilterType; // 0x4a (0x1)
	unsigned char unreflected_4b[0x5]; // 0x4b (0x5) 
	struct FAIDataProviderBoolValue BoolValue; // 0x50 (0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88 (0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xc0 (0x38)
	unsigned char unreflected_f8[0x1]; // 0xf8 (0x1) 
	struct TEnumAsByte<EEnvTestScoreEquation> ScoringEquation; // 0xf9 (0x1)
	struct TEnumAsByte<EEnvQueryTestClamping> ClampMinType; // 0xfa (0x1)
	struct TEnumAsByte<EEnvQueryTestClamping> ClampMaxType; // 0xfb (0x1)
	enum EEQSNormalizationType NormalizationType; // 0xfc (0x1)
	unsigned char unreflected_fd[0x3]; // 0xfd (0x3) 
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100 (0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138 (0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170 (0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1a8 (0x38)
	bool bDefineReferenceValue; // 0x1e0 (0x1)
	unsigned char unreflected_1e1[0xf]; // 0x1e1 (0xf) 
	unsigned char bWorkOnFloatValues; // 0x1f0 (0x1)
	unsigned char padding_1f1[0x7]; // 0x1f1 (0x7)
};

