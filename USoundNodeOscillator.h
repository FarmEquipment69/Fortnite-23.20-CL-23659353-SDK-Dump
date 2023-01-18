// Class /Script/Engine.SoundNodeOscillator
// Size: 0x70
class USoundNodeOscillator : public USoundNode
{
	unsigned char bModulateVolume; // 0x48 (0x1)
	unsigned char bModulatePitch; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	float AmplitudeMin; // 0x4c (0x4)
	float AmplitudeMax; // 0x50 (0x4)
	float FrequencyMin; // 0x54 (0x4)
	float FrequencyMax; // 0x58 (0x4)
	float OffsetMin; // 0x5c (0x4)
	float OffsetMax; // 0x60 (0x4)
	float CenterMin; // 0x64 (0x4)
	float CenterMax; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

