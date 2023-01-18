// ScriptStruct /Script/HmxAudio.InitialVolumeSettings
// Size: 0x10
struct FInitialVolumeSettings
{
	bool modifyAtStart; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Volume; // 0x4 (0x4)
	float TransitionTime; // 0x8 (0x4)
	enum EPostFadeOptionEnum postFadeOption; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

