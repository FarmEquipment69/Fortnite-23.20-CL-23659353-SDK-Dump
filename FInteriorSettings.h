// ScriptStruct /Script/Engine.InteriorSettings
// Size: 0x24
struct FInteriorSettings
{
	bool bIsWorldSettings; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ExteriorVolume; // 0x4 (0x4)
	float ExteriorTime; // 0x8 (0x4)
	float ExteriorLPF; // 0xc (0x4)
	float ExteriorLPFTime; // 0x10 (0x4)
	float InteriorVolume; // 0x14 (0x4)
	float InteriorTime; // 0x18 (0x4)
	float InteriorLPF; // 0x1c (0x4)
	float InteriorLPFTime; // 0x20 (0x4)
};

