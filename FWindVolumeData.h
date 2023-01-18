// ScriptStruct /Script/FortniteGame.WindVolumeData
// Size: 0x18
struct FWindVolumeData
{
	struct FWindVolumeID ID; // 0x0 (0x4)
	enum EWindVolumePriority Priority; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TScriptInterface<class IWindVolumeInterface> WindVolume; // 0x8 (0x10)
};

