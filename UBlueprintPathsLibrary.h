// Class /Script/Engine.BlueprintPathsLibrary
// Size: 0x28
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintPathsLibrary.VideoCaptureDir (Underlying native function: VideoCaptureDir 0x9e333ec)
	static struct FString VideoCaptureDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ValidatePath (Underlying native function: ValidatePath 0x9e331c8)
	static void ValidatePath(struct FString& InPath, bool& bDidSucceed, struct FText& OutReason); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.Split (Underlying native function: Split 0x9e32d28)
	static void Split(struct FString& InPath, struct FString& PathPart, struct FString& FilenamePart, struct FString& ExtensionPart); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SourceConfigDir (Underlying native function: SourceConfigDir 0x9e30724)
	static struct FString SourceConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ShouldSaveToUserDir (Underlying native function: ShouldSaveToUserDir 0x9e32d04)
	static bool ShouldSaveToUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ShaderWorkingDir (Underlying native function: ShaderWorkingDir 0x9e32bd0)
	static struct FString ShaderWorkingDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SetProjectFilePath (Underlying native function: SetProjectFilePath 0x9e32a00)
	static void SetProjectFilePath(struct FString& NewGameProjectFilePath); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPathsLibrary.SetExtension (Underlying native function: SetExtension 0x9e325f8)
	static struct FString SetExtension(struct FString& InPath, struct FString& InNewExtension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ScreenShotDir (Underlying native function: ScreenShotDir 0x9e32258)
	static struct FString ScreenShotDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.SandboxesDir (Underlying native function: SandboxesDir 0x9e317c4)
	static struct FString SandboxesDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.RootDir (Underlying native function: RootDir 0x9e31780)
	static struct FString RootDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes (Underlying native function: RemoveDuplicateSlashes 0x9e314cc)
	static void RemoveDuplicateSlashes(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectUserDir (Underlying native function: ProjectUserDir 0x9e3100c)
	static struct FString ProjectUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectSavedDir (Underlying native function: ProjectSavedDir 0x9e30ee4)
	static struct FString ProjectSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectPluginsDir (Underlying native function: ProjectPluginsDir 0x9e30db0)
	static struct FString ProjectPluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir (Underlying native function: ProjectPersistentDownloadDir 0x9e30c7c)
	static struct FString ProjectPersistentDownloadDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectModsDir (Underlying native function: ProjectModsDir 0x9e30b48)
	static struct FString ProjectModsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectLogDir (Underlying native function: ProjectLogDir 0x9e30b04)
	static struct FString ProjectLogDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectIntermediateDir (Underlying native function: ProjectIntermediateDir 0x9e30ac0)
	static struct FString ProjectIntermediateDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectDir (Underlying native function: ProjectDir 0x9e3098c)
	static struct FString ProjectDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectContentDir (Underlying native function: ProjectContentDir 0x9e30858)
	static struct FString ProjectContentDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProjectConfigDir (Underlying native function: ProjectConfigDir 0x9e30724)
	static struct FString ProjectConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ProfilingDir (Underlying native function: ProfilingDir 0x9e306e0)
	static struct FString ProfilingDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.NormalizeFilename (Underlying native function: NormalizeFilename 0x9e30418)
	static void NormalizeFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.NormalizeDirectoryName (Underlying native function: NormalizeDirectoryName 0x9e30164)
	static void NormalizeDirectoryName(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakeValidFileName (Underlying native function: MakeValidFileName 0x9e2fb38)
	static struct FString MakeValidFileName(struct FString& InString, struct FString& InReplacementChar); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakeStandardFilename (Underlying native function: MakeStandardFilename 0x9e2f884)
	static void MakeStandardFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakePlatformFilename (Underlying native function: MakePlatformFilename 0x9e2f5d0)
	static void MakePlatformFilename(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.MakePathRelativeTo (Underlying native function: MakePathRelativeTo 0x9e2f1f8)
	static bool MakePathRelativeTo(struct FString& InPath, struct FString& InRelativeTo, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.LaunchDir (Underlying native function: LaunchDir 0x9e2e99c)
	static struct FString LaunchDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsSamePath (Underlying native function: IsSamePath 0x9e2e70c)
	static bool IsSamePath(struct FString& PathA, struct FString& PathB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsRestrictedPath (Underlying native function: IsRestrictedPath 0x9e2e5b8)
	static bool IsRestrictedPath(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsRelative (Underlying native function: IsRelative 0x9e2e464)
	static bool IsRelative(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsProjectFilePathSet (Underlying native function: IsProjectFilePathSet 0x9e2e440)
	static bool IsProjectFilePathSet(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.IsDrive (Underlying native function: IsDrive 0x9e2e2b0)
	static bool IsDrive(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir (Underlying native function: HasProjectPersistentDownloadDir 0x27c9608)
	static bool HasProjectPersistentDownloadDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths (Underlying native function: GetToolTipLocalizationPaths 0x9e2df5c)
	static struct TArray<struct FString> GetToolTipLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetRestrictedFolderNames (Underlying native function: GetRestrictedFolderNames 0x9e2df30)
	static struct TArray<struct FString> GetRestrictedFolderNames(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetRelativePathToRoot (Underlying native function: GetRelativePathToRoot 0x9e2dec0)
	static struct FString GetRelativePathToRoot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths (Underlying native function: GetPropertyNameLocalizationPaths 0x9e2de94)
	static struct TArray<struct FString> GetPropertyNameLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetProjectFilePath (Underlying native function: GetProjectFilePath 0x9e2dd60)
	static struct FString GetProjectFilePath(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetPath (Underlying native function: GetPath 0x9e2dbec)
	static struct FString GetPath(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars (Underlying native function: GetInvalidFileSystemChars 0x9e2d7e4)
	static struct FString GetInvalidFileSystemChars(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetGameLocalizationPaths (Underlying native function: GetGameLocalizationPaths 0x9e2d7b8)
	static struct TArray<struct FString> GetGameLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetExtension (Underlying native function: GetExtension 0x9e2d600)
	static struct FString GetExtension(struct FString& InPath, bool& bIncludeDot); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths (Underlying native function: GetEngineLocalizationPaths 0x9e2d5d4)
	static struct TArray<struct FString> GetEngineLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths (Underlying native function: GetEditorLocalizationPaths 0x9e2d5a8)
	static struct TArray<struct FString> GetEditorLocalizationPaths(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetCleanFilename (Underlying native function: GetCleanFilename 0x9e2d330)
	static struct FString GetCleanFilename(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GetBaseFilename (Underlying native function: GetBaseFilename 0x9e2d178)
	static struct FString GetBaseFilename(struct FString& InPath, bool& bRemovePath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GeneratedConfigDir (Underlying native function: GeneratedConfigDir 0x9e2d110)
	static struct FString GeneratedConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameUserDeveloperDir (Underlying native function: GameUserDeveloperDir 0x9e2cfdc)
	static struct FString GameUserDeveloperDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameSourceDir (Underlying native function: GameSourceDir 0x9e2cea8)
	static struct FString GameSourceDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameDevelopersDir (Underlying native function: GameDevelopersDir 0x9e2cd74)
	static struct FString GameDevelopersDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.GameAgnosticSavedDir (Underlying native function: GameAgnosticSavedDir 0x9e2c550)
	static struct FString GameAgnosticSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.FileExists (Underlying native function: FileExists 0x9e2cc20)
	static bool FileExists(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.FeaturePackDir (Underlying native function: FeaturePackDir 0x9e2caec)
	static struct FString FeaturePackDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterprisePluginsDir (Underlying native function: EnterprisePluginsDir 0x9e2c9b8)
	static struct FString EnterprisePluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir (Underlying native function: EnterpriseFeaturePackDir 0x9e2c884)
	static struct FString EnterpriseFeaturePackDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnterpriseDir (Underlying native function: EnterpriseDir 0x9e2c750)
	static struct FString EnterpriseDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir (Underlying native function: EngineVersionAgnosticUserDir 0x9e2c70c)
	static struct FString EngineVersionAgnosticUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineUserDir (Underlying native function: EngineUserDir 0x9e2c6c8)
	static struct FString EngineUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineSourceDir (Underlying native function: EngineSourceDir 0x9e2c594)
	static struct FString EngineSourceDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineSavedDir (Underlying native function: EngineSavedDir 0x9e2c550)
	static struct FString EngineSavedDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EnginePluginsDir (Underlying native function: EnginePluginsDir 0x9e2c41c)
	static struct FString EnginePluginsDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineIntermediateDir (Underlying native function: EngineIntermediateDir 0x9e2c2e8)
	static struct FString EngineIntermediateDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineDir (Underlying native function: EngineDir 0x9e2c1b4)
	static struct FString EngineDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineContentDir (Underlying native function: EngineContentDir 0x9e2c080)
	static struct FString EngineContentDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.EngineConfigDir (Underlying native function: EngineConfigDir 0x9e2bf4c)
	static struct FString EngineConfigDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.DirectoryExists (Underlying native function: DirectoryExists 0x9e2bdf8)
	static bool DirectoryExists(struct FString& InPath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.DiffDir (Underlying native function: DiffDir 0x9e2bdb4)
	static struct FString DiffDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CreateTempFilename (Underlying native function: CreateTempFilename 0x9e2ba10)
	static struct FString CreateTempFilename(struct FString& Path, struct FString& Prefix, struct FString& Extension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertToSandboxPath (Underlying native function: ConvertToSandboxPath 0x9e2b61c)
	static struct FString ConvertToSandboxPath(struct FString& InPath, struct FString& InSandboxName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertRelativePathToFull (Underlying native function: ConvertRelativePathToFull 0x9e2b220)
	static struct FString ConvertRelativePathToFull(struct FString& InPath, struct FString& InBasePath); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ConvertFromSandboxPath (Underlying native function: ConvertFromSandboxPath 0x9e2ac64)
	static struct FString ConvertFromSandboxPath(struct FString& InPath, struct FString& InSandboxName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.Combine (Underlying native function: Combine 0x9e2a234)
	static struct FString Combine(struct TArray<struct FString>& InPaths); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CollapseRelativeDirectories (Underlying native function: CollapseRelativeDirectories 0x9e29f7c)
	static bool CollapseRelativeDirectories(struct FString& InPath, struct FString& OutPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.CloudDir (Underlying native function: CloudDir 0x9e29f38)
	static struct FString CloudDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.ChangeExtension (Underlying native function: ChangeExtension 0x9e29c74)
	static struct FString ChangeExtension(struct FString& InPath, struct FString& InNewExtension); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.BugItDir (Underlying native function: BugItDir 0x9e29900)
	static struct FString BugItDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationTransientDir (Underlying native function: AutomationTransientDir 0x9e295fc)
	static struct FString AutomationTransientDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationLogDir (Underlying native function: AutomationLogDir 0x9e294c8)
	static struct FString AutomationLogDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPathsLibrary.AutomationDir (Underlying native function: AutomationDir 0x9e29484)
	static struct FString AutomationDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

