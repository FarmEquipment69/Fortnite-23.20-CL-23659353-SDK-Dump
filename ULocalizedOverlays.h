// Class /Script/Overlay.LocalizedOverlays
// Size: 0x80
class ULocalizedOverlays : public UOverlays
{
	class UBasicOverlays* DefaultOverlays; // 0x28 (0x8)
	struct TMap<struct FString, class UBasicOverlays*> LocaleToOverlaysMap; // 0x30 (0x50)
};

