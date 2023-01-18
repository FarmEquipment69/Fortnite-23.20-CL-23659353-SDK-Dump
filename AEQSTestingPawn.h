// Class /Script/AIModule.EQSTestingPawn
// Size: 0x6c0
class AEQSTestingPawn : public ACharacter
{
	unsigned char unreflected_620[0x8]; // 0x620 (0x8) 
	class UEnvQuery* QueryTemplate; // 0x628 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x630 (0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x640 (0x10)
	float TimeLimitPerStep; // 0x650 (0x4)
	int StepToDebugDraw; // 0x654 (0x4)
	enum EEnvQueryHightlightMode HighlightMode; // 0x658 (0x1)
	unsigned char unreflected_659[0x3]; // 0x659 (0x3) 
	unsigned char bDrawLabels; // 0x65c (0x1)
	unsigned char bDrawFailedItems; // 0x65c (0x1)
	unsigned char bReRunQueryOnlyOnFinishedMove; // 0x65c (0x1)
	unsigned char bShouldBeVisibleInGame; // 0x65c (0x1)
	unsigned char bTickDuringGame; // 0x65c (0x1)
	unsigned char unreflected_65d[0x3]; // 0x65d (0x3) 
	struct TEnumAsByte<EEnvQueryRunMode> QueryingMode; // 0x660 (0x1)
	unsigned char unreflected_661[0x7]; // 0x661 (0x7) 
	struct FNavAgentProperties NavAgentProperties; // 0x668 (0x30)
	unsigned char padding_698[0x28]; // 0x698 (0x28)
};

