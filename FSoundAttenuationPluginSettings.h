// ScriptStruct /Script/Engine.SoundAttenuationPluginSettings
// Size: 0x40
struct FSoundAttenuationPluginSettings
{
	struct TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0 (0x10)
	struct TArray<class UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10 (0x10)
	struct TArray<class UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20 (0x10)
	struct TArray<class USourceDataOverridePluginSourceSettingsBase*> SourceDataOverridePluginSettingsArray; // 0x30 (0x10)
};

