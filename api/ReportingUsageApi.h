/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ReportingUsageApi.h
 *
 * 
 */

#ifndef ReportingUsageApi_H_
#define ReportingUsageApi_H_


#include "ApiClient.h"

#include "PageResource«UsageInfo».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  ReportingUsageApi
{
public:
    ReportingUsageApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ReportingUsageApi();
    /// <summary>
    /// Returns aggregated endpoint usage information by day
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>/// <param name="combineEndpoints">Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)</param>/// <param name="method">Filter for a certain endpoint method.  Must include url as well to work (optional)</param>/// <param name="url">Filter for a certain endpoint.  Must include method as well to work (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UsageInfo»>> getUsageByDay(int64_t startDate, int64_t endDate, bool combineEndpoints, utility::string_t method, utility::string_t url, int32_t size, int32_t page);
    /// <summary>
    /// Returns aggregated endpoint usage information by hour
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>/// <param name="combineEndpoints">Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)</param>/// <param name="method">Filter for a certain endpoint method.  Must include url as well to work (optional)</param>/// <param name="url">Filter for a certain endpoint.  Must include method as well to work (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UsageInfo»>> getUsageByHour(int64_t startDate, int64_t endDate, bool combineEndpoints, utility::string_t method, utility::string_t url, int32_t size, int32_t page);
    /// <summary>
    /// Returns aggregated endpoint usage information by minute
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>/// <param name="combineEndpoints">Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)</param>/// <param name="method">Filter for a certain endpoint method.  Must include url as well to work (optional)</param>/// <param name="url">Filter for a certain endpoint.  Must include method as well to work (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UsageInfo»>> getUsageByMinute(int64_t startDate, int64_t endDate, bool combineEndpoints, utility::string_t method, utility::string_t url, int32_t size, int32_t page);
    /// <summary>
    /// Returns aggregated endpoint usage information by month
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>/// <param name="combineEndpoints">Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)</param>/// <param name="method">Filter for a certain endpoint method.  Must include url as well to work (optional)</param>/// <param name="url">Filter for a certain endpoint.  Must include method as well to work (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UsageInfo»>> getUsageByMonth(int64_t startDate, int64_t endDate, bool combineEndpoints, utility::string_t method, utility::string_t url, int32_t size, int32_t page);
    /// <summary>
    /// Returns aggregated endpoint usage information by year
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>/// <param name="combineEndpoints">Whether to combine counts from different endpoints. Removes the url and method from the result object (optional, default to false)</param>/// <param name="method">Filter for a certain endpoint method.  Must include url as well to work (optional)</param>/// <param name="url">Filter for a certain endpoint.  Must include method as well to work (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UsageInfo»>> getUsageByYear(int64_t startDate, int64_t endDate, bool combineEndpoints, utility::string_t method, utility::string_t url, int32_t size, int32_t page);
    /// <summary>
    /// Returns list of endpoints called (method and url)
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startDate">The beginning of the range being requested, unix timestamp in seconds</param>/// <param name="endDate">The ending of the range being requested, unix timestamp in seconds</param>
    pplx::task<std::vector<utility::string_t>> getUsageEndpoints(int64_t startDate, int64_t endDate);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ReportingUsageApi_H_ */
