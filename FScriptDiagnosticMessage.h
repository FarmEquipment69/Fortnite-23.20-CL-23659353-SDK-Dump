// ScriptStruct /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
// Size: 0x58
struct FScriptDiagnosticMessage
{
	struct TEnumAsByte<EScriptDiagnosticMessageType> MessageType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FDateTime* Timestamp; // 0x8 (0x8)
	struct FString Channel; // 0x10 (0x10)
	struct FText MessageStr; // 0x20 (0x18)
	struct FScriptDiagnosticSourceLocation SourceLocation; // 0x38 (0x20)
};

