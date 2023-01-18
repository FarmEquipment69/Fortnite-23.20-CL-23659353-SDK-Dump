// Class /Script/Engine.EdGraphNode
// Size: 0x98
class UEdGraphNode : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TArray<class UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38 (0x10)
	int NodePosX; // 0x48 (0x4)
	int NodePosY; // 0x4c (0x4)
	int NodeWidth; // 0x50 (0x4)
	int NodeHeight; // 0x54 (0x4)
	struct TEnumAsByte<ENodeAdvancedPins> AdvancedPinDisplay; // 0x58 (0x1)
	enum ENodeEnabledState EnabledState; // 0x59 (0x1)
	unsigned char unreflected_5a[0x1]; // 0x5a (0x1) 
	unsigned char bDisplayAsDisabled; // 0x5b (0x1)
	unsigned char bUserSetEnabledState; // 0x5b (0x1)
	unsigned char bIsIntermediateNode; // 0x5b (0x1)
	unsigned char bHasCompilerMessage; // 0x5b (0x1)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FString NodeComment; // 0x60 (0x10)
	int ErrorType; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FString ErrorMsg; // 0x78 (0x10)
	struct FGuid NodeGUID; // 0x88 (0x10)
};

