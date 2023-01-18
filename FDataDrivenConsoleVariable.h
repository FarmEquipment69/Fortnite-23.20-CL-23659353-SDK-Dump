// ScriptStruct /Script/Engine.DataDrivenConsoleVariable
// Size: 0x50
struct FDataDrivenConsoleVariable
{
	enum FDataDrivenCVarType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString Name; // 0x8 (0x10)
	struct FString ToolTip; // 0x18 (0x10)
	float DefaultValueFloat; // 0x28 (0x4)
	int DefaultValueInt; // 0x2c (0x4)
	bool DefaultValueBool; // 0x30 (0x1)
	unsigned char padding_31[0x1f]; // 0x31 (0x1f)
};

