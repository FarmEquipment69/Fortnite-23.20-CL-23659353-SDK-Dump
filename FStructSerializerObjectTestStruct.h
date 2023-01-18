// ScriptStruct /Script/Serialization.StructSerializerObjectTestStruct
// Size: 0xb0
struct FStructSerializerObjectTestStruct
{
	unsigned char RawClass_0[0x8]; // 0x0 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char WrappedClass_8[0x8]; // 0x8 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class UClass* SubClass; // 0x10 (0x8)
	struct TWeakObjectPtr<class UClass> SoftClass; // 0x18 (0x28)
	class UObject* RawObject; // 0x40 (0x8)
	class UObject* WrappedObject; // 0x48 (0x8)
	struct TWeakObjectPtr<class UMetaData> WeakObject; // 0x50 (0x8)
	struct TWeakObjectPtr<class UMetaData> SoftObject; // 0x58 (0x28)
	struct FSoftClassPath ClassPath; // 0x80 (0x18)
	struct FSoftObjectPath ObjectPath; // 0x98 (0x18)
};

