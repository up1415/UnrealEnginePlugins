class FAnimNodeTutorialModule : public IModuleInterface {
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};


IMPLEMENT_MODULE(FAnimNodeTutorialModule, AnimNodeTutorial)

void FAnimNodeTutorialModule::StartupModule() {
}

void FAnimNodeTutorialModule::ShutdownModule() {
}
