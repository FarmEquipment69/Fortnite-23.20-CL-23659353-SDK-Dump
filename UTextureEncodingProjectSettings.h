// Class /Script/Engine.TextureEncodingProjectSettings
// Size: 0x48
class UTextureEncodingProjectSettings : public UDeveloperSettings
{
	unsigned char bFinalUsesRDO; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int8_t FinalRDOLambda; // 0x34 (0x1)
	enum ETextureEncodeEffort FinalEffortLevel; // 0x35 (0x1)
	enum ETextureUniversalTiling FinalUniversalTiling; // 0x36 (0x1)
	unsigned char unreflected_37[0x1]; // 0x37 (0x1) 
	unsigned char bFastUsesRDO; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int8_t FastRDOLambda; // 0x3c (0x1)
	enum ETextureEncodeEffort FastEffortLevel; // 0x3d (0x1)
	enum ETextureUniversalTiling FastUniversalTiling; // 0x3e (0x1)
	enum ETextureEncodeSpeed CookUsesSpeed; // 0x3f (0x1)
	enum ETextureEncodeSpeed EditorUsesSpeed; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

