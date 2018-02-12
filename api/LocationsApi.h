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
 * LocationsApi.h
 *
 * 
 */

#ifndef LocationsApi_H_
#define LocationsApi_H_


#include "ApiClient.h"

#include "CountryResource.h"
#include "CurrencyResource.h"
#include "Result.h"
#include "StateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  LocationsApi
{
public:
    LocationsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~LocationsApi();
    /// <summary>
    /// Get a list of countries
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    
    pplx::task<std::vector<std::shared_ptr<CountryResource>>> getCountries();
    /// <summary>
    /// Get the iso3 code of your country
    /// </summary>
    /// <remarks>
    /// Determined by geo ip location. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    
    pplx::task<utility::string_t> getCountryByGeoLocation();
    /// <summary>
    /// Get a list of a country&#39;s states
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="countryCodeIso3">The iso3 code of the country</param>
    pplx::task<std::vector<std::shared_ptr<StateResource>>> getCountryStates(utility::string_t countryCodeIso3);
    /// <summary>
    /// Get the currency information of your country
    /// </summary>
    /// <remarks>
    /// Determined by geo ip location, currency to country mapping and a fallback setting. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    
    pplx::task<std::shared_ptr<CurrencyResource>> getCurrencyByGeoLocation();

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* LocationsApi_H_ */

