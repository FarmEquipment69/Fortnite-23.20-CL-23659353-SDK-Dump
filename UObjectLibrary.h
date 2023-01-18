// Class /Script/Engine.ObjectLibrary
// Size: 0xa8
class UObjectLibrary : public UObject
{
	unsigned char ObjectBaseClass_28[0x8]; // 0x28 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	bool bHasBlueprintClasses; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<class UObject*> Objects; // 0x38 (0x10)
	struct TArray<struct TWeakObjectPtr<class UObject>> WeakObjects; // 0x48 (0x10)
	bool bUseWeakReferences; // 0x58 (0x1)
	bool bIsFullyLoaded; // 0x59 (0x1)
	unsigned char padding_5a[0x4e]; // 0x5a (0x4e)
};

