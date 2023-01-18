// Class /Script/Engine.SoundNodeDoppler
// Size: 0x58
class USoundNodeDoppler : public USoundNode
{
	float DopplerIntensity; // 0x48 (0x4)
	bool bUseSmoothing; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float SmoothingInterpSpeed; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

