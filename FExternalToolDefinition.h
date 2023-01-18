// ScriptStruct /Script/Engine.ExternalToolDefinition
// Size: 0x60
struct FExternalToolDefinition
{
	struct FString ToolName; // 0x0 (0x10)
	struct FFilePath ExecutablePath; // 0x10 (0x10)
	struct FString CommandLineOptions; // 0x20 (0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30 (0x10)
	struct FString ScriptExtension; // 0x40 (0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50 (0x10)
};

