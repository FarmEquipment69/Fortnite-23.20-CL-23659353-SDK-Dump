// ScriptStruct /Script/Engine.PreviewAttachedObjectPair
// Size: 0x38
struct FPreviewAttachedObjectPair
{
	struct TWeakObjectPtr<class UObject> AttachedObject; // 0x0 (0x28)
	class UObject* Object; // 0x28 (0x8)
	struct FName AttachedTo; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

