// Class /Script/Engine.SoundSubmixBase
// Size: 0x40
class USoundSubmixBase : public UObject
{
	bool bAutoDisable; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float AutoDisableTime; // 0x2c (0x4)
	struct TArray<class USoundSubmixBase*> ChildSubmixes; // 0x30 (0x10)
};

