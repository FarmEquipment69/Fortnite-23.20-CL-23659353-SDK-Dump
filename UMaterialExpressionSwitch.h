// Class /Script/Engine.MaterialExpressionSwitch
// Size: 0x130
class UMaterialExpressionSwitch : public UMaterialExpression
{
	struct FString Description; // 0xb0 (0x10)
	struct FExpressionInput SwitchValue; // 0xc0 (0x28)
	float ConstSwitchValue; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct FExpressionInput Default; // 0xf0 (0x28)
	float ConstDefault; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct TArray<struct FSwitchCustomInput> Inputs; // 0x120 (0x10)
};

