class FAnimGraphNodeTutorialModule : public IModuleInterface {
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};


IMPLEMENT_MODULE(FAnimGraphNodeTutorialModule, AnimGraphNodeTutorialModule)

void FAnimGraphNodeTutorialModule::StartupModule() {
}

void FAnimGraphNodeTutorialModule::ShutdownModule() {
}
