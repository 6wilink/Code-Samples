<?php
(!defined('TASKLET_ID')) && exit('404: Page Not Found');

'use strict';
require_once 'limit.data.php';
require_once 'class.nms4.dao.php';

/**
 * App NMS4 Resource
 *
 * @desc		read top 50 devices array for map/list
 * @author 		QZ
 * @version 	1.1.271216a
 * @verified 	-
 */
final class NMS4Res implements INMS4
{
	private $_query = null;
	
	public function __construct()
	{
		$this->_query = NMS4DAO::getInstance();
	}
	
	public function fetchDevices($keyedConditions = null)
	{
		$this->_query->configCharset();
		$this->_query->setTable('dev');
		$result = $this->_query->fetch(null, array('mac','ts'));
		return $result;
	}
	
	public function fetchUser($keyedConditions = null)
	{
		return null;
	}
	public function setDevice($keyedRecord = null)
	{
		return null;
	}
	public function setUser($keyedRecord = null)
	{
		return null;
	}
}

?>
