/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * LogsApi.h
 *
 * 
 */

#ifndef LogsApi_H_
#define LogsApi_H_


#include "ApiClient.h"

#include "BreEventLog.h"
#include "ForwardLog.h"
#include "PageResource«BreEventLog».h"
#include "PageResource«ForwardLog».h"
#include "PageResource«UserActionLog».h"
#include "Result.h"
#include "UserActionLog.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  LogsApi
{
public:
    LogsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~LogsApi();
    /// <summary>
    /// Add a user log entry
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="logEntry">The user log entry to be added (optional)</param>
    pplx::task<void> addUserLog(std::shared_ptr<UserActionLog> logEntry);
    /// <summary>
    /// Get an existing BRE event log entry by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The BRE event log entry id</param>
    pplx::task<std::shared_ptr<BreEventLog>> getBREEventLog(utility::string_t id);
    /// <summary>
    /// Returns a list of BRE event log entries
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterStartDate">A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterEventName">Filter event logs by event name (optional)</param>/// <param name="filterEventId">Filter event logs by request id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:DESC)</param>
    pplx::task<std::shared_ptr<PageResource«BreEventLog»>> getBREEventLogs(utility::string_t filterStartDate, utility::string_t filterEventName, utility::string_t filterEventId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get an existing forward log entry by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The forward log entry id</param>
    pplx::task<std::shared_ptr<ForwardLog>> getBREForwardLog(utility::string_t id);
    /// <summary>
    /// Returns a list of forward log entries
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterStartDate">A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterEndDate">A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>/// <param name="filterStatusCode">Filter forward logs by http status code (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:DESC)</param>
    pplx::task<std::shared_ptr<PageResource«ForwardLog»>> getBREForwardLogs(utility::string_t filterStartDate, utility::string_t filterEndDate, int32_t filterStatusCode, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Returns a user log entry by id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The user log entry id</param>
    pplx::task<std::shared_ptr<UserActionLog>> getUserLog(utility::string_t id);
    /// <summary>
    /// Returns a page of user logs entries
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterUser">Filter for actions taken by a specific user by id (optional)</param>/// <param name="filterActionName">Filter for actions of a specific name (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to timestamp:DESC)</param>
    pplx::task<std::shared_ptr<PageResource«UserActionLog»>> getUserLogs(int32_t filterUser, utility::string_t filterActionName, int32_t size, int32_t page, utility::string_t order);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* LogsApi_H_ */

