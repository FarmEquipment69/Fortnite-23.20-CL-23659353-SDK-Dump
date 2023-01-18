// ScriptStruct /Script/FortniteGame.DirectiveInput
// Size: 0x30
struct FDirectiveInput
{
	enum ECommonInputType Input; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText Text; // 0x8 (0x18)
	struct TArray<struct FText> ABTestingTexts; // 0x20 (0x10)
};

