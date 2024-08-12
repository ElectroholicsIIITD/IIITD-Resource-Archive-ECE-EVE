int DMA_Init(XAxiDma * AxiDMA, u32 device_ID){
    XAxiDma_Config *DMA_confptr;
    int status;
    // Initialize the DMA
    DMA_confptr=XAxiDma_LookupConfig(XPAR_AXI_DMA_0_DEVICE_ID);
    status=XAxiDma_CfgInitialize(AxiDMA,DMA_confptr);
    // Check whether the DMA is initialized
    if(status!=XST_SUCCESS)
    {
    	printf("\n\rDMA Initialization Failed !");
    	return XST_FAILURE;
    }
    return XST_SUCCESS;
}
