// ScriptStruct /Script/Engine.AnimNodeData
// Size: 0x28
struct FAnimNodeData
{
	struct TScriptInterface<class IAnimClassInterface> AnimClassInterface; // 0x0 (0x10)
	struct TArray<uint32_t> Entries; // 0x10 (0x10)
	int NodeIndex; // 0x20 (0x4)
	enum EAnimNodeDataFlags Flags; // 0x24 (0x4)
};

