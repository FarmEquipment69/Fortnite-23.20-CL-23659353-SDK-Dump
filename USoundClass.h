// Class /Script/Engine.SoundClass
// Size: 0x208
class USoundClass : public UObject
{
	struct FSoundClassProperties Properties; // 0x28 (0x1b8)
	struct TArray<class USoundClass*> ChildClasses; // 0x1e0 (0x10)
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x1f0 (0x10)
	class USoundClass* ParentClass; // 0x200 (0x8)
};

