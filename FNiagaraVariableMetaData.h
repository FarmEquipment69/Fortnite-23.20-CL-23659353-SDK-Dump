// ScriptStruct /Script/Niagara.NiagaraVariableMetaData
// Size: 0x140
struct FNiagaraVariableMetaData
{
	struct FText Description; // 0x0 (0x18)
	struct FText CategoryName; // 0x18 (0x18)
	bool bAdvancedDisplay; // 0x30 (0x1)
	bool bDisplayInOverviewStack; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	int InlineParameterSortPriority; // 0x34 (0x4)
	bool bOverrideColor; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FLinearColor InlineParameterColorOverride; // 0x3c (0x10)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides; // 0x50 (0x10)
	bool bEnableBoolOverride; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	struct FNiagaraBoolParameterMetaData InlineParameterBoolOverride; // 0x68 (0x20)
	int EditorSortPriority; // 0x88 (0x4)
	bool bInlineEditConditionToggle; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct FNiagaraInputConditionMetadata EditCondition; // 0x90 (0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0xa8 (0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0xc0 (0x50)
	struct FName ParentAttribute; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct TArray<struct FName> AlternateAliases; // 0x118 (0x10)
	struct FGuid VariableGuid; // 0x128 (0x10)
	bool bIsStaticSwitch; // 0x138 (0x1)
	unsigned char unreflected_139[0x3]; // 0x139 (0x3) 
	int StaticSwitchDefaultValue; // 0x13c (0x4)
};

