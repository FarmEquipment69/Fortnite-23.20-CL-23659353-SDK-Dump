// ScriptStruct /Script/EnhancedInput.MappingQueryIssue
// Size: 0x18
struct FMappingQueryIssue
{
	enum EMappingQueryIssue Issue; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UInputMappingContext* BlockingContext; // 0x8 (0x8)
	class UInputAction* BlockingAction; // 0x10 (0x8)
};

