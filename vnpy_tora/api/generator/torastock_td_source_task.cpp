void ToraStockApi::OnFrontConnected()
{
	Task task = Task();
	task.task_name = ONFRONTCONNECTED;
	this->task_queue.push(task);
};

void ToraStockApi::OnFrontDisconnected(int nReason)
{
	Task task = Task();
	task.task_name = ONFRONTDISCONNECTED;
	task.task_id = int(nReason);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspError(CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPERROR;
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspGetConnectionInfo(CTORATstpConnectionInfoField *pConnectionInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPGETCONNECTIONINFO;
	if (pConnectionInfoField)
	{
		CTORATstpConnectionInfoField *task_data = new CTORATstpConnectionInfoField();
		*task_data = *pConnectionInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspUserLogin(CTORATstpRspUserLoginField *pRspUserLoginField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPUSERLOGIN;
	if (pRspUserLoginField)
	{
		CTORATstpRspUserLoginField *task_data = new CTORATstpRspUserLoginField();
		*task_data = *pRspUserLoginField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspUserLogout(CTORATstpUserLogoutField *pUserLogoutField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPUSERLOGOUT;
	if (pUserLogoutField)
	{
		CTORATstpUserLogoutField *task_data = new CTORATstpUserLogoutField();
		*task_data = *pUserLogoutField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspUserPasswordUpdate(CTORATstpUserPasswordUpdateField *pUserPasswordUpdateField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPUSERPASSWORDUPDATE;
	if (pUserPasswordUpdateField)
	{
		CTORATstpUserPasswordUpdateField *task_data = new CTORATstpUserPasswordUpdateField();
		*task_data = *pUserPasswordUpdateField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInputDeviceSerial(CTORATstpRspInputDeviceSerialField *pRspInputDeviceSerialField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINPUTDEVICESERIAL;
	if (pRspInputDeviceSerialField)
	{
		CTORATstpRspInputDeviceSerialField *task_data = new CTORATstpRspInputDeviceSerialField();
		*task_data = *pRspInputDeviceSerialField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPORDERINSERT;
	if (pInputOrderField)
	{
		CTORATstpInputOrderField *task_data = new CTORATstpInputOrderField();
		*task_data = *pInputOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnOrder(CTORATstpOrderField *pOrderField) 
{
	Task task = Task();
	task.task_name = ONRTNORDER;
	if (pOrderField)
	{
		CTORATstpOrderField *task_data = new CTORATstpOrderField();
		*task_data = *pOrderField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnOrderInsert(CTORATstpInputOrderField *pInputOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNORDERINSERT;
	if (pInputOrderField)
	{
		CTORATstpInputOrderField *task_data = new CTORATstpInputOrderField();
		*task_data = *pInputOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnTrade(CTORATstpTradeField *pTradeField) 
{
	Task task = Task();
	task.task_name = ONRTNTRADE;
	if (pTradeField)
	{
		CTORATstpTradeField *task_data = new CTORATstpTradeField();
		*task_data = *pTradeField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPORDERACTION;
	if (pInputOrderActionField)
	{
		CTORATstpInputOrderActionField *task_data = new CTORATstpInputOrderActionField();
		*task_data = *pInputOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnOrderAction(CTORATstpInputOrderActionField *pInputOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNORDERACTION;
	if (pInputOrderActionField)
	{
		CTORATstpInputOrderActionField *task_data = new CTORATstpInputOrderActionField();
		*task_data = *pInputOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPCONDORDERINSERT;
	if (pInputCondOrderField)
	{
		CTORATstpInputCondOrderField *task_data = new CTORATstpInputCondOrderField();
		*task_data = *pInputCondOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnCondOrder(CTORATstpConditionOrderField *pConditionOrderField) 
{
	Task task = Task();
	task.task_name = ONRTNCONDORDER;
	if (pConditionOrderField)
	{
		CTORATstpConditionOrderField *task_data = new CTORATstpConditionOrderField();
		*task_data = *pConditionOrderField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnCondOrderInsert(CTORATstpInputCondOrderField *pInputCondOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNCONDORDERINSERT;
	if (pInputCondOrderField)
	{
		CTORATstpInputCondOrderField *task_data = new CTORATstpInputCondOrderField();
		*task_data = *pInputCondOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPCONDORDERACTION;
	if (pInputCondOrderActionField)
	{
		CTORATstpInputCondOrderActionField *task_data = new CTORATstpInputCondOrderActionField();
		*task_data = *pInputCondOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnCondOrderAction(CTORATstpInputCondOrderActionField *pInputCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNCONDORDERACTION;
	if (pInputCondOrderActionField)
	{
		CTORATstpInputCondOrderActionField *task_data = new CTORATstpInputCondOrderActionField();
		*task_data = *pInputCondOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspNegoOrderInsert(CTORATstpInputNegoOrderField *pInputNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPNEGOORDERINSERT;
	if (pInputNegoOrderField)
	{
		CTORATstpInputNegoOrderField *task_data = new CTORATstpInputNegoOrderField();
		*task_data = *pInputNegoOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnNegoOrder(CTORATstpNegoOrderField *pNegoOrderField) 
{
	Task task = Task();
	task.task_name = ONRTNNEGOORDER;
	if (pNegoOrderField)
	{
		CTORATstpNegoOrderField *task_data = new CTORATstpNegoOrderField();
		*task_data = *pNegoOrderField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnNegoOrderInsert(CTORATstpInputNegoOrderField *pInputNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNNEGOORDERINSERT;
	if (pInputNegoOrderField)
	{
		CTORATstpInputNegoOrderField *task_data = new CTORATstpInputNegoOrderField();
		*task_data = *pInputNegoOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnNegoTrade(CTORATstpNegoTradeField *pNegoTradeField) 
{
	Task task = Task();
	task.task_name = ONRTNNEGOTRADE;
	if (pNegoTradeField)
	{
		CTORATstpNegoTradeField *task_data = new CTORATstpNegoTradeField();
		*task_data = *pNegoTradeField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspNegoOrderAction(CTORATstpInputNegoOrderActionField *pInputNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPNEGOORDERACTION;
	if (pInputNegoOrderActionField)
	{
		CTORATstpInputNegoOrderActionField *task_data = new CTORATstpInputNegoOrderActionField();
		*task_data = *pInputNegoOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnNegoOrderAction(CTORATstpInputNegoOrderActionField *pInputNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNNEGOORDERACTION;
	if (pInputNegoOrderActionField)
	{
		CTORATstpInputNegoOrderActionField *task_data = new CTORATstpInputNegoOrderActionField();
		*task_data = *pInputNegoOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspOrderInsertEx(CTORATstpInputOrderExField *pInputOrderExField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPORDERINSERTEX;
	if (pInputOrderExField)
	{
		CTORATstpInputOrderExField *task_data = new CTORATstpInputOrderExField();
		*task_data = *pInputOrderExField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspOrderActionEx(CTORATstpInputOrderActionExField *pInputOrderActionExField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPORDERACTIONEX;
	if (pInputOrderActionExField)
	{
		CTORATstpInputOrderActionExField *task_data = new CTORATstpInputOrderActionExField();
		*task_data = *pInputOrderActionExField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnMarketStatus(CTORATstpMarketStatusField *pMarketStatusField) 
{
	Task task = Task();
	task.task_name = ONRTNMARKETSTATUS;
	if (pMarketStatusField)
	{
		CTORATstpMarketStatusField *task_data = new CTORATstpMarketStatusField();
		*task_data = *pMarketStatusField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPTRANSFERFUND;
	if (pInputTransferFundField)
	{
		CTORATstpInputTransferFundField *task_data = new CTORATstpInputTransferFundField();
		*task_data = *pInputTransferFundField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnTransferFund(CTORATstpInputTransferFundField *pInputTransferFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNTRANSFERFUND;
	if (pInputTransferFundField)
	{
		CTORATstpInputTransferFundField *task_data = new CTORATstpInputTransferFundField();
		*task_data = *pInputTransferFundField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnTransferFund(CTORATstpTransferFundField *pTransferFundField) 
{
	Task task = Task();
	task.task_name = ONRTNTRANSFERFUND;
	if (pTransferFundField)
	{
		CTORATstpTransferFundField *task_data = new CTORATstpTransferFundField();
		*task_data = *pTransferFundField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPTRANSFERPOSITION;
	if (pInputTransferPositionField)
	{
		CTORATstpInputTransferPositionField *task_data = new CTORATstpInputTransferPositionField();
		*task_data = *pInputTransferPositionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnErrRtnTransferPosition(CTORATstpInputTransferPositionField *pInputTransferPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONERRRTNTRANSFERPOSITION;
	if (pInputTransferPositionField)
	{
		CTORATstpInputTransferPositionField *task_data = new CTORATstpInputTransferPositionField();
		*task_data = *pInputTransferPositionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnTransferPosition(CTORATstpTransferPositionField *pTransferPositionField) 
{
	Task task = Task();
	task.task_name = ONRTNTRANSFERPOSITION;
	if (pTransferPositionField)
	{
		CTORATstpTransferPositionField *task_data = new CTORATstpTransferPositionField();
		*task_data = *pTransferPositionField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnPeripheryTransferPosition(CTORATstpPeripheryTransferPositionField *pPeripheryTransferPositionField) 
{
	Task task = Task();
	task.task_name = ONRTNPERIPHERYTRANSFERPOSITION;
	if (pPeripheryTransferPositionField)
	{
		CTORATstpPeripheryTransferPositionField *task_data = new CTORATstpPeripheryTransferPositionField();
		*task_data = *pPeripheryTransferPositionField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnPeripheryTransferFund(CTORATstpPeripheryTransferFundField *pPeripheryTransferFundField) 
{
	Task task = Task();
	task.task_name = ONRTNPERIPHERYTRANSFERFUND;
	if (pPeripheryTransferFundField)
	{
		CTORATstpPeripheryTransferFundField *task_data = new CTORATstpPeripheryTransferFundField();
		*task_data = *pPeripheryTransferFundField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInquiryJZFund(CTORATstpRspInquiryJZFundField *pRspInquiryJZFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINQUIRYJZFUND;
	if (pRspInquiryJZFundField)
	{
		CTORATstpRspInquiryJZFundField *task_data = new CTORATstpRspInquiryJZFundField();
		*task_data = *pRspInquiryJZFundField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInquiryBankAccountFund(CTORATstpRspInquiryBankAccountFundField *pRspInquiryBankAccountFundField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINQUIRYBANKACCOUNTFUND;
	if (pRspInquiryBankAccountFundField)
	{
		CTORATstpRspInquiryBankAccountFundField *task_data = new CTORATstpRspInquiryBankAccountFundField();
		*task_data = *pRspInquiryBankAccountFundField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRtnTradingNotice(CTORATstpTradingNoticeField *pTradingNoticeField) 
{
	Task task = Task();
	task.task_name = ONRTNTRADINGNOTICE;
	if (pTradingNoticeField)
	{
		CTORATstpTradingNoticeField *task_data = new CTORATstpTradingNoticeField();
		*task_data = *pTradingNoticeField;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInquiryMaxOrderVolume(CTORATstpRspInquiryMaxOrderVolumeField *pRspInquiryMaxOrderVolumeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINQUIRYMAXORDERVOLUME;
	if (pRspInquiryMaxOrderVolumeField)
	{
		CTORATstpRspInquiryMaxOrderVolumeField *task_data = new CTORATstpRspInquiryMaxOrderVolumeField();
		*task_data = *pRspInquiryMaxOrderVolumeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInquiryTradeConcentration(CTORATstpInquiryTradeConcentrationField *pInquiryTradeConcentrationField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINQUIRYTRADECONCENTRATION;
	if (pInquiryTradeConcentrationField)
	{
		CTORATstpInquiryTradeConcentrationField *task_data = new CTORATstpInquiryTradeConcentrationField();
		*task_data = *pInquiryTradeConcentrationField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspModifyOpenPosCost(CTORATstpReqModifyOpenPosCostField *pReqModifyOpenPosCostField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPMODIFYOPENPOSCOST;
	if (pReqModifyOpenPosCostField)
	{
		CTORATstpReqModifyOpenPosCostField *task_data = new CTORATstpReqModifyOpenPosCostField();
		*task_data = *pReqModifyOpenPosCostField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInputNodeFundAssignment(CTORATstpInputNodeFundAssignmentField *pInputNodeFundAssignmentField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINPUTNODEFUNDASSIGNMENT;
	if (pInputNodeFundAssignmentField)
	{
		CTORATstpInputNodeFundAssignmentField *task_data = new CTORATstpInputNodeFundAssignmentField();
		*task_data = *pInputNodeFundAssignmentField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspInquiryNodeFundAssignment(CTORATstpRspInquiryNodeFundAssignmentField *pRspInquiryNodeFundAssignmentField, CTORATstpRspInfoField *pRspInfoField, int nRequestID) 
{
	Task task = Task();
	task.task_name = ONRSPINQUIRYNODEFUNDASSIGNMENT;
	if (pRspInquiryNodeFundAssignmentField)
	{
		CTORATstpRspInquiryNodeFundAssignmentField *task_data = new CTORATstpRspInquiryNodeFundAssignmentField();
		*task_data = *pRspInquiryNodeFundAssignmentField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryExchange(CTORATstpExchangeField *pExchangeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYEXCHANGE;
	if (pExchangeField)
	{
		CTORATstpExchangeField *task_data = new CTORATstpExchangeField();
		*task_data = *pExchangeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQrySecurity(CTORATstpSecurityField *pSecurityField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSECURITY;
	if (pSecurityField)
	{
		CTORATstpSecurityField *task_data = new CTORATstpSecurityField();
		*task_data = *pSecurityField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryIPOInfo(CTORATstpIPOInfoField *pIPOInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYIPOINFO;
	if (pIPOInfoField)
	{
		CTORATstpIPOInfoField *task_data = new CTORATstpIPOInfoField();
		*task_data = *pIPOInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryUser(CTORATstpUserField *pUserField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYUSER;
	if (pUserField)
	{
		CTORATstpUserField *task_data = new CTORATstpUserField();
		*task_data = *pUserField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryInvestor(CTORATstpInvestorField *pInvestorField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTOR;
	if (pInvestorField)
	{
		CTORATstpInvestorField *task_data = new CTORATstpInvestorField();
		*task_data = *pInvestorField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryShareholderAccount(CTORATstpShareholderAccountField *pShareholderAccountField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSHAREHOLDERACCOUNT;
	if (pShareholderAccountField)
	{
		CTORATstpShareholderAccountField *task_data = new CTORATstpShareholderAccountField();
		*task_data = *pShareholderAccountField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryRationalInfo(CTORATstpRationalInfoField *pRationalInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYRATIONALINFO;
	if (pRationalInfoField)
	{
		CTORATstpRationalInfoField *task_data = new CTORATstpRationalInfoField();
		*task_data = *pRationalInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryOrder(CTORATstpOrderField *pOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYORDER;
	if (pOrderField)
	{
		CTORATstpOrderField *task_data = new CTORATstpOrderField();
		*task_data = *pOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryOrderAction(CTORATstpOrderActionField *pOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYORDERACTION;
	if (pOrderActionField)
	{
		CTORATstpOrderActionField *task_data = new CTORATstpOrderActionField();
		*task_data = *pOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryTrade(CTORATstpTradeField *pTradeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADE;
	if (pTradeField)
	{
		CTORATstpTradeField *task_data = new CTORATstpTradeField();
		*task_data = *pTradeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryTradingAccount(CTORATstpTradingAccountField *pTradingAccountField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGACCOUNT;
	if (pTradingAccountField)
	{
		CTORATstpTradingAccountField *task_data = new CTORATstpTradingAccountField();
		*task_data = *pTradingAccountField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPosition(CTORATstpPositionField *pPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPOSITION;
	if (pPositionField)
	{
		CTORATstpPositionField *task_data = new CTORATstpPositionField();
		*task_data = *pPositionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryTradingFee(CTORATstpTradingFeeField *pTradingFeeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGFEE;
	if (pTradingFeeField)
	{
		CTORATstpTradingFeeField *task_data = new CTORATstpTradingFeeField();
		*task_data = *pTradingFeeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryInvestorTradingFee(CTORATstpInvestorTradingFeeField *pInvestorTradingFeeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORTRADINGFEE;
	if (pInvestorTradingFeeField)
	{
		CTORATstpInvestorTradingFeeField *task_data = new CTORATstpInvestorTradingFeeField();
		*task_data = *pInvestorTradingFeeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryIPOQuota(CTORATstpIPOQuotaField *pIPOQuotaField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYIPOQUOTA;
	if (pIPOQuotaField)
	{
		CTORATstpIPOQuotaField *task_data = new CTORATstpIPOQuotaField();
		*task_data = *pIPOQuotaField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryOrderFundDetail(CTORATstpOrderFundDetailField *pOrderFundDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYORDERFUNDDETAIL;
	if (pOrderFundDetailField)
	{
		CTORATstpOrderFundDetailField *task_data = new CTORATstpOrderFundDetailField();
		*task_data = *pOrderFundDetailField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryFundTransferDetail(CTORATstpFundTransferDetailField *pFundTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYFUNDTRANSFERDETAIL;
	if (pFundTransferDetailField)
	{
		CTORATstpFundTransferDetailField *task_data = new CTORATstpFundTransferDetailField();
		*task_data = *pFundTransferDetailField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPositionTransferDetail(CTORATstpPositionTransferDetailField *pPositionTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPOSITIONTRANSFERDETAIL;
	if (pPositionTransferDetailField)
	{
		CTORATstpPositionTransferDetailField *task_data = new CTORATstpPositionTransferDetailField();
		*task_data = *pPositionTransferDetailField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPeripheryPositionTransferDetail(CTORATstpPeripheryPositionTransferDetailField *pPeripheryPositionTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPERIPHERYPOSITIONTRANSFERDETAIL;
	if (pPeripheryPositionTransferDetailField)
	{
		CTORATstpPeripheryPositionTransferDetailField *task_data = new CTORATstpPeripheryPositionTransferDetailField();
		*task_data = *pPeripheryPositionTransferDetailField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPeripheryFundTransferDetail(CTORATstpPeripheryFundTransferDetailField *pPeripheryFundTransferDetailField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPERIPHERYFUNDTRANSFERDETAIL;
	if (pPeripheryFundTransferDetailField)
	{
		CTORATstpPeripheryFundTransferDetailField *task_data = new CTORATstpPeripheryFundTransferDetailField();
		*task_data = *pPeripheryFundTransferDetailField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryBondConversionInfo(CTORATstpBondConversionInfoField *pBondConversionInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYBONDCONVERSIONINFO;
	if (pBondConversionInfoField)
	{
		CTORATstpBondConversionInfoField *task_data = new CTORATstpBondConversionInfoField();
		*task_data = *pBondConversionInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryBondPutbackInfo(CTORATstpBondPutbackInfoField *pBondPutbackInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYBONDPUTBACKINFO;
	if (pBondPutbackInfoField)
	{
		CTORATstpBondPutbackInfoField *task_data = new CTORATstpBondPutbackInfoField();
		*task_data = *pBondPutbackInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryInvestorCondOrderLimitParam(CTORATstpInvestorCondOrderLimitParamField *pInvestorCondOrderLimitParamField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORCONDORDERLIMITPARAM;
	if (pInvestorCondOrderLimitParamField)
	{
		CTORATstpInvestorCondOrderLimitParamField *task_data = new CTORATstpInvestorCondOrderLimitParamField();
		*task_data = *pInvestorCondOrderLimitParamField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryConditionOrder(CTORATstpConditionOrderField *pConditionOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYCONDITIONORDER;
	if (pConditionOrderField)
	{
		CTORATstpConditionOrderField *task_data = new CTORATstpConditionOrderField();
		*task_data = *pConditionOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryCondOrderAction(CTORATstpCondOrderActionField *pCondOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYCONDORDERACTION;
	if (pCondOrderActionField)
	{
		CTORATstpCondOrderActionField *task_data = new CTORATstpCondOrderActionField();
		*task_data = *pCondOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryTradingNotice(CTORATstpTradingNoticeField *pTradingNoticeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADINGNOTICE;
	if (pTradingNoticeField)
	{
		CTORATstpTradingNoticeField *task_data = new CTORATstpTradingNoticeField();
		*task_data = *pTradingNoticeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryIPONumberResult(CTORATstpIPONumberResultField *pIPONumberResultField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYIPONUMBERRESULT;
	if (pIPONumberResultField)
	{
		CTORATstpIPONumberResultField *task_data = new CTORATstpIPONumberResultField();
		*task_data = *pIPONumberResultField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryIPOMatchNumberResult(CTORATstpIPOMatchNumberResultField *pIPOMatchNumberResultField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYIPOMATCHNUMBERRESULT;
	if (pIPOMatchNumberResultField)
	{
		CTORATstpIPOMatchNumberResultField *task_data = new CTORATstpIPOMatchNumberResultField();
		*task_data = *pIPOMatchNumberResultField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryShareholderSpecPrivilege(CTORATstpShareholderSpecPrivilegeField *pShareholderSpecPrivilegeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSHAREHOLDERSPECPRIVILEGE;
	if (pShareholderSpecPrivilegeField)
	{
		CTORATstpShareholderSpecPrivilegeField *task_data = new CTORATstpShareholderSpecPrivilegeField();
		*task_data = *pShareholderSpecPrivilegeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryMarket(CTORATstpMarketField *pMarketField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYMARKET;
	if (pMarketField)
	{
		CTORATstpMarketField *task_data = new CTORATstpMarketField();
		*task_data = *pMarketField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryETFFile(CTORATstpETFFileField *pETFFileField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYETFFILE;
	if (pETFFileField)
	{
		CTORATstpETFFileField *task_data = new CTORATstpETFFileField();
		*task_data = *pETFFileField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryETFBasket(CTORATstpETFBasketField *pETFBasketField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYETFBASKET;
	if (pETFBasketField)
	{
		CTORATstpETFBasketField *task_data = new CTORATstpETFBasketField();
		*task_data = *pETFBasketField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryInvestorPositionLimit(CTORATstpInvestorPositionLimitField *pInvestorPositionLimitField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYINVESTORPOSITIONLIMIT;
	if (pInvestorPositionLimitField)
	{
		CTORATstpInvestorPositionLimitField *task_data = new CTORATstpInvestorPositionLimitField();
		*task_data = *pInvestorPositionLimitField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQrySZSEImcParams(CTORATstpSZSEImcParamsField *pSZSEImcParamsField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSZSEIMCPARAMS;
	if (pSZSEImcParamsField)
	{
		CTORATstpSZSEImcParamsField *task_data = new CTORATstpSZSEImcParamsField();
		*task_data = *pSZSEImcParamsField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQrySZSEImcExchangeRate(CTORATstpSZSEImcExchangeRateField *pSZSEImcExchangeRateField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSZSEIMCEXCHANGERATE;
	if (pSZSEImcExchangeRateField)
	{
		CTORATstpSZSEImcExchangeRateField *task_data = new CTORATstpSZSEImcExchangeRateField();
		*task_data = *pSZSEImcExchangeRateField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQrySZSEHKPriceTickInfo(CTORATstpSZSEHKPriceTickInfoField *pSZSEHKPriceTickInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSZSEHKPRICETICKINFO;
	if (pSZSEHKPriceTickInfoField)
	{
		CTORATstpSZSEHKPriceTickInfoField *task_data = new CTORATstpSZSEHKPriceTickInfoField();
		*task_data = *pSZSEHKPriceTickInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryLofFundInfo(CTORATstpLofFundInfoField *pLofFundInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYLOFFUNDINFO;
	if (pLofFundInfoField)
	{
		CTORATstpLofFundInfoField *task_data = new CTORATstpLofFundInfoField();
		*task_data = *pLofFundInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPledgePosition(CTORATstpPledgePositionField *pPledgePositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPLEDGEPOSITION;
	if (pPledgePositionField)
	{
		CTORATstpPledgePositionField *task_data = new CTORATstpPledgePositionField();
		*task_data = *pPledgePositionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPledgeInfo(CTORATstpPledgeInfoField *pPledgeInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPLEDGEINFO;
	if (pPledgeInfoField)
	{
		CTORATstpPledgeInfoField *task_data = new CTORATstpPledgeInfoField();
		*task_data = *pPledgeInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQrySystemNodeInfo(CTORATstpSystemNodeInfoField *pSystemNodeInfoField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSYSTEMNODEINFO;
	if (pSystemNodeInfoField)
	{
		CTORATstpSystemNodeInfoField *task_data = new CTORATstpSystemNodeInfoField();
		*task_data = *pSystemNodeInfoField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryStandardBondPosition(CTORATstpStandardBondPositionField *pStandardBondPositionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYSTANDARDBONDPOSITION;
	if (pStandardBondPositionField)
	{
		CTORATstpStandardBondPositionField *task_data = new CTORATstpStandardBondPositionField();
		*task_data = *pStandardBondPositionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryPrematurityRepoOrder(CTORATstpPrematurityRepoOrderField *pPrematurityRepoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYPREMATURITYREPOORDER;
	if (pPrematurityRepoOrderField)
	{
		CTORATstpPrematurityRepoOrderField *task_data = new CTORATstpPrematurityRepoOrderField();
		*task_data = *pPrematurityRepoOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryNegoOrder(CTORATstpNegoOrderField *pNegoOrderField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYNEGOORDER;
	if (pNegoOrderField)
	{
		CTORATstpNegoOrderField *task_data = new CTORATstpNegoOrderField();
		*task_data = *pNegoOrderField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryNegoOrderAction(CTORATstpNegoOrderActionField *pNegoOrderActionField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYNEGOORDERACTION;
	if (pNegoOrderActionField)
	{
		CTORATstpNegoOrderActionField *task_data = new CTORATstpNegoOrderActionField();
		*task_data = *pNegoOrderActionField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryNegoTrade(CTORATstpNegoTradeField *pNegoTradeField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYNEGOTRADE;
	if (pNegoTradeField)
	{
		CTORATstpNegoTradeField *task_data = new CTORATstpNegoTradeField();
		*task_data = *pNegoTradeField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void ToraStockApi::OnRspQryNegotiationParam(CTORATstpNegotiationParamField *pNegotiationParamField, CTORATstpRspInfoField *pRspInfoField, int nRequestID, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPQRYNEGOTIATIONPARAM;
	if (pNegotiationParamField)
	{
		CTORATstpNegotiationParamField *task_data = new CTORATstpNegotiationParamField();
		*task_data = *pNegotiationParamField;
		task.task_data = task_data;
	}
	if (pRspInfoField)
	{
		CTORATstpRspInfoField *task_error = new CTORATstpRspInfoField();
		*task_error = *pRspInfoField;
		task.task_error = task_error;
	}
	task.task_id = int(nRequestID);
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

